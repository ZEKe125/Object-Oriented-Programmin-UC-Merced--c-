 #include <iostream>
using namespace std;

//Forward declaration of Number and Coord3D
class Object;
class Coord3D;
class Number;

//The Object ADT
class Object {
public:
	virtual Object* multiply ( const Object* obj ) const = 0;
	virtual void print() = 0;
	 ~Object() {}
};

class Number : public Object{
public:
	int num;

	Number(){
        this->num = 0;
    };

	Number(int i){
        this->num = i;
    }

	~Number(){

    };

	/* 
	 * if other is a Number, then this should return a Number
	 * if other is a Coord3D, then this should return a Coord3D
	 * Hint: typeid(var) might be a helpful operator to know the type of an object at runtime
	 */ 
	Object* multiply(const Object* other) const;

	void print(){
		cout << "num: " << this->num << endl;
	}
};


class Coord3D : public Object {
public:
	int x, y, z;

	Coord3D(){
        this->x = 0;
		this->y = 0;
		this->z = 0;
    };

	Coord3D(int x1, int y1, int z1){
		this->x = x1;
		this->y = y1;
		this->z = z1;
		
	}

	~Coord3D(){

    };

	// This should return a Coord3D
	Object* multiply(const Object* other) const;

	void print(){
		cout << "x = " << this->x << ", y = " << this->y << ", z = " <<  this->z  << endl;
	}
};

Object* Number::multiply(const Object* other) const {

    if(typeid(*this) == typeid(*other)){
        Number *n = (Number*)other;
        Number N;
        N.num = this->num * n->num;
        Object *send = new Number(N.num);
        return send;
    }
    else{
        Coord3D * coor = (Coord3D*)other;
        Coord3D C;
        C.x = coor->x * this->num;
        C.y = coor->y * this->num;
        C.z = coor->z * this->num;
        Object * send = new Coord3D(C.x, C.y, C.z);
        return send;
    }
}

Object * Coord3D :: multiply(const Object* other)const{
    
    Coord3D * Check = (Coord3D*)other;
    if(typeid(*this) != typeid(*other)){
        Number * n = (Number*)other;
        int x1, y1, z1;
        x1 = this->x * n->num;
        y1 = this->y * n->num;
        z1 = this->z * n->num;
        Object *send = new Coord3D(x1, y1, z1);
        return send;
    }
    else{
        Coord3D * C = (Coord3D*)other;
        int x1, y1, z1;
        x1 = this->x * C->x;
        y1 = this->y * C->y;
        z1 = this->z * C->z;
        Object *send = new Coord3D(x1, y1, z1);
        return send;
    }
}