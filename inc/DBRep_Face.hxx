// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DBRep_Face_HeaderFile
#define _DBRep_Face_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DBRep_Face_HeaderFile
#include <Handle_DBRep_Face.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Draw_Color_HeaderFile
#include <Draw_Color.hxx>
#endif
#ifndef _TColStd_Array1OfInteger_HeaderFile
#include <TColStd_Array1OfInteger.hxx>
#endif
#ifndef _TColStd_Array1OfReal_HeaderFile
#include <TColStd_Array1OfReal.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _GeomAbs_IsoType_HeaderFile
#include <GeomAbs_IsoType.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Face;
class Draw_Color;



class DBRep_Face : public MMgt_TShared {

public:

  //! N is the number of iso intervals. <br>
  Standard_EXPORT   DBRep_Face(const TopoDS_Face& F,const Standard_Integer N,const Draw_Color& C);
  
       const TopoDS_Face& Face() const;
  
        void Face(const TopoDS_Face& F) ;
  
        Standard_Integer NbIsos() const;
  
        void Iso(const Standard_Integer I,const GeomAbs_IsoType T,const Standard_Real Par,const Standard_Real T1,const Standard_Real T2) ;
  
        void GetIso(const Standard_Integer I,GeomAbs_IsoType& T,Standard_Real& Par,Standard_Real& T1,Standard_Real& T2) const;
  
       const Draw_Color& Color() const;
  
        void Color(const Draw_Color& C) ;




  DEFINE_STANDARD_RTTI(DBRep_Face)

protected:




private: 


TopoDS_Face myFace;
Draw_Color myColor;
TColStd_Array1OfInteger myTypes;
TColStd_Array1OfReal myParams;


};


#include <DBRep_Face.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif