// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepGProp_EdgeTool_HeaderFile
#define _BRepGProp_EdgeTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class Standard_OutOfRange;
class BRepAdaptor_Curve;
class gp_Pnt;
class gp_Vec;
class TColStd_Array1OfReal;


//!   Provides  the required  methods    to instantiate <br>
//!  CGProps from GProp with a Curve from BRepAdaptor. <br>
class BRepGProp_EdgeTool  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
//!  Returns the parametric value of the start point of <br>
//!  the curve.  The curve is oriented from the start point <br>
//!  to the end point. <br>
  Standard_EXPORT   static  Standard_Real FirstParameter(const BRepAdaptor_Curve& C) ;
  
//!  Returns the parametric value of the end point of <br>
//!  the curve.  The curve is oriented from the start point <br>
//!  to the end point. <br>
  Standard_EXPORT   static  Standard_Real LastParameter(const BRepAdaptor_Curve& C) ;
  
//!  Returns the number of Gauss points required to do <br>
//!  the integration with a good accuracy using the <br>
//!  Gauss method.  For a polynomial curve of degree n <br>
//!  the maxima of accuracy is obtained with an order <br>
//!  of integration equal to 2*n-1. <br>
  Standard_EXPORT   static  Standard_Integer IntegrationOrder(const BRepAdaptor_Curve& C) ;
  //! Returns the point of parameter U on the loaded curve. <br>
  Standard_EXPORT   static  gp_Pnt Value(const BRepAdaptor_Curve& C,const Standard_Real U) ;
  
//!  Returns the point of parameter U and the first derivative <br>
//!  at this point. <br>
  Standard_EXPORT   static  void D1(const BRepAdaptor_Curve& C,const Standard_Real U,gp_Pnt& P,gp_Vec& V1) ;
  //! Returns  the number  of  intervals for  continuity <br>
//!          <S>. May be one if Continuity(me) >= <S> <br>
  Standard_EXPORT   static  Standard_Integer NbIntervals(const BRepAdaptor_Curve& C,const GeomAbs_Shape S) ;
  //! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
  Standard_EXPORT   static  void Intervals(const BRepAdaptor_Curve& C,TColStd_Array1OfReal& T,const GeomAbs_Shape S) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif