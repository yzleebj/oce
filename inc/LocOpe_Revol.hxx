// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_Revol_HeaderFile
#define _LocOpe_Revol_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopoDS_Shape.hxx>
#include <gp_Ax1.hxx>
#include <Standard_Real.hxx>
#include <Standard_Boolean.hxx>
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#include <Handle_Geom_Curve.hxx>
class Standard_NoSuchObject;
class StdFail_NotDone;
class TopoDS_Shape;
class gp_Ax1;
class TopTools_ListOfShape;
class TColGeom_SequenceOfCurve;
class Geom_Curve;


//! Defines a prism (using Prism from BRepSweep)
//! with modifications provided for the Prism feature.
class LocOpe_Revol 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT LocOpe_Revol();
  
  Standard_EXPORT LocOpe_Revol(const TopoDS_Shape& Base, const gp_Ax1& Axis, const Standard_Real Angle, const Standard_Real angledec);
  
  Standard_EXPORT LocOpe_Revol(const TopoDS_Shape& Base, const gp_Ax1& Axis, const Standard_Real Angle);
  
  Standard_EXPORT   void Perform (const TopoDS_Shape& Base, const gp_Ax1& Axis, const Standard_Real Angle, const Standard_Real angledec) ;
  
  Standard_EXPORT   void Perform (const TopoDS_Shape& Base, const gp_Ax1& Axis, const Standard_Real Angle) ;
  
  Standard_EXPORT  const  TopoDS_Shape& FirstShape()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& LastShape()  const;
  
  Standard_EXPORT  const  TopoDS_Shape& Shape()  const;
  
  Standard_EXPORT  const  TopTools_ListOfShape& Shapes (const TopoDS_Shape& S)  const;
  
  Standard_EXPORT   void Curves (TColGeom_SequenceOfCurve& SCurves)  const;
  
  Standard_EXPORT   Handle(Geom_Curve) BarycCurve()  const;




protected:





private:

  
  Standard_EXPORT   void IntPerf() ;


  TopoDS_Shape myBase;
  gp_Ax1 myAxis;
  Standard_Real myAngle;
  Standard_Real myAngTra;
  Standard_Boolean myIsTrans;
  Standard_Boolean myDone;
  TopoDS_Shape myRes;
  TopoDS_Shape myFirstShape;
  TopoDS_Shape myLastShape;
  TopTools_DataMapOfShapeListOfShape myMap;


};







#endif // _LocOpe_Revol_HeaderFile
