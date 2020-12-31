/*
 * ShapeBox.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#ifndef SHAPEBOX_H_
#define SHAPEBOX_H_

namespace volume {

class ShapeBox {
public:
	ShapeBox();
	virtual ~ShapeBox();

	virtual void setWidth(double width)=0;
	virtual void setHeight(double height)=0;
	virtual void setLength(double length)=0;

protected:
	double width;
	double height;
	double length;
};

} /* namespace volume */

#endif /* SHAPEBOX_H_ */
