// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _QANCollection_DataMapNodeOfDataMapOfRealPnt_HeaderFile
#define _QANCollection_DataMapNodeOfDataMapOfRealPnt_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_QANCollection_DataMapNodeOfDataMapOfRealPnt_HeaderFile
#include <Handle_QANCollection_DataMapNodeOfDataMapOfRealPnt.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class gp_Pnt;
class TColStd_MapRealHasher;
class QANCollection_DataMapOfRealPnt;
class QANCollection_DataMapIteratorOfDataMapOfRealPnt;



class QANCollection_DataMapNodeOfDataMapOfRealPnt : public TCollection_MapNode {

public:

  
      QANCollection_DataMapNodeOfDataMapOfRealPnt(const Standard_Real& K,const gp_Pnt& I,const TCollection_MapNodePtr& n);
  
        Standard_Real& Key() const;
  
        gp_Pnt& Value() const;




  DEFINE_STANDARD_RTTI(QANCollection_DataMapNodeOfDataMapOfRealPnt)

protected:




private: 


Standard_Real myKey;
gp_Pnt myValue;


};

#define TheKey Standard_Real
#define TheKey_hxx <Standard_Real.hxx>
#define TheItem gp_Pnt
#define TheItem_hxx <gp_Pnt.hxx>
#define Hasher TColStd_MapRealHasher
#define Hasher_hxx <TColStd_MapRealHasher.hxx>
#define TCollection_DataMapNode QANCollection_DataMapNodeOfDataMapOfRealPnt
#define TCollection_DataMapNode_hxx <QANCollection_DataMapNodeOfDataMapOfRealPnt.hxx>
#define TCollection_DataMapIterator QANCollection_DataMapIteratorOfDataMapOfRealPnt
#define TCollection_DataMapIterator_hxx <QANCollection_DataMapIteratorOfDataMapOfRealPnt.hxx>
#define Handle_TCollection_DataMapNode Handle_QANCollection_DataMapNodeOfDataMapOfRealPnt
#define TCollection_DataMapNode_Type_() QANCollection_DataMapNodeOfDataMapOfRealPnt_Type_()
#define TCollection_DataMap QANCollection_DataMapOfRealPnt
#define TCollection_DataMap_hxx <QANCollection_DataMapOfRealPnt.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif