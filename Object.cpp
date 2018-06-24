//
// Created by Anastasia CHEPURNA on 6/24/18.
//

#include <MacTypes.h>
#include "Object.h"

OList :: OList(): obj(NULL), next(NULL) {
  //  printf("list1\n");
	return ;
}

OList :: OList(OList const& src)
{
  //   printf("list2\n");
	*this = src;
}

OList :: OList(Object *obj)
{
   // printf("list3\n");
	this->obj = obj;
	this->next = NULL;
}

OList :: ~OList()
{
	delete this->obj;	
	this->obj = NULL;
	this->next = NULL;
}

OList &OList :: operator=(OList const& src)
{
	// delete *this;
	this->obj = src.obj;
	this->next = src.next;
	return(*this);
}

Object :: Object() 
{
	return ;
}

Object :: Object(int x, int y): x(x), y(y)
{
  //  printf("object\n");
	return ;
}

Object :: Object(Object const & obj)
{
	*this = obj;
}

Object &Object :: operator=(Object const & obj)
{
	this->map = obj.map;
	this->width = obj.width;
	this->height = obj.height;
	this->x = obj.x;
	this->y = obj.y;
	this->type = obj.type;
	this->hp = obj.hp;
	return (*this);	
}

Object :: ~Object()
{
	return ;
}

int		Object :: getWidth()
{
	return (this->width);
}

int		Object :: getHeight()
{
	return (this->height);
}

int		Object :: getX()
{
	return (this->x);
}

int		Object :: getY()
{
	return(this->y);
}

void	Object :: move_v(int pos)
{
	this->y += pos;
}

void 	Object :: move_h(int pos)
{
	this->x += pos;
}

std::string const Object::getType() {
	return (type);
}

char **Object::getMap() {
    return (map);
}

int		Object::getHP()
{
	return (this->hp);
}

void	Object::setHP(int const & hp)
{
	this->hp = hp;
}

