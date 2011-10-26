// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepGProp_Sinert_HeaderFile
#define _BRepGProp_Sinert_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GProp_GProps_HeaderFile
#include <GProp_GProps.hxx>
#endif
class TopoDS_Edge;
class BRepGProp_Face;
class BRepGProp_Domain;
class gp_Pnt;



class BRepGProp_Sinert  : public GProp_GProps {
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

  
  Standard_EXPORT   BRepGProp_Sinert();
  
  Standard_EXPORT   BRepGProp_Sinert(const BRepGProp_Face& S,const gp_Pnt& SLocation);
  
  Standard_EXPORT   BRepGProp_Sinert(BRepGProp_Face& S,BRepGProp_Domain& D,const gp_Pnt& SLocation);
  
  Standard_EXPORT   BRepGProp_Sinert(BRepGProp_Face& S,const gp_Pnt& SLocation,const Standard_Real Eps);
  
  Standard_EXPORT   BRepGProp_Sinert(BRepGProp_Face& S,BRepGProp_Domain& D,const gp_Pnt& SLocation,const Standard_Real Eps);
  
  Standard_EXPORT     void SetLocation(const gp_Pnt& SLocation) ;
  
  Standard_EXPORT     void Perform(const BRepGProp_Face& S) ;
  
  Standard_EXPORT     void Perform(BRepGProp_Face& S,BRepGProp_Domain& D) ;
  
  Standard_EXPORT     Standard_Real Perform(BRepGProp_Face& S,const Standard_Real Eps) ;
  
  Standard_EXPORT     Standard_Real Perform(BRepGProp_Face& S,BRepGProp_Domain& D,const Standard_Real Eps) ;
  
  Standard_EXPORT     Standard_Real GetEpsilon() ;





protected:





private:



Standard_Real myEpsilon;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif