//
// Created by Anastasia CHEPURNA on 6/24/18.
//

#include <MacTypes.h>
#include "Object.h"

OList :: OList(): obj(NULL), next(NULL) {
	return ;
}

OList :: OList(OList const& src)
{
	*this = src;
}

OList :: OList(Object *obj)
{
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
	this->x += pos;
}

void 	Object :: move_h(int pos)
{
	this->y += pos;
}

std::string const Object::getType() {
	return (type);
}
