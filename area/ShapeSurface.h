/*
 * Shape.h
 *
 *  Created on: Dec 31, 2020
 *      Author: rWX917587
 */

#ifndef SHAPESURFACE_H_
#define SHAPESURFACE_H_

namespace area {

class ShapeSurface {
public:
	ShapeSurface(double, double);
	virtual ~ShapeSurface();
	virtual double getArea()=0;

protected:
	double length;
	double width;

};

} /* namespace area */

#endif /* SHAPESURFACE_H_ */
