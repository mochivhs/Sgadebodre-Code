// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_WindowEventInfo
#include <lime/_internal/backend/native/WindowEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d8a53269ce4a50a3_939_new,"lime._internal.backend.native.WindowEventInfo","new",0x4cd621b8,"lime._internal.backend.native.WindowEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",939,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_d8a53269ce4a50a3_950_clone,"lime._internal.backend.native.WindowEventInfo","clone",0x771e6ab5,"lime._internal.backend.native.WindowEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",950,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void WindowEventInfo_obj::__construct( ::Dynamic type,::hx::Null< int >  __o_windowID,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height,::hx::Null< int >  __o_x,::hx::Null< int >  __o_y){
            		int windowID = __o_windowID.Default(0);
            		int width = __o_width.Default(0);
            		int height = __o_height.Default(0);
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_d8a53269ce4a50a3_939_new)
HXLINE( 940)		this->type = ( (int)(type) );
HXLINE( 941)		this->windowID = windowID;
HXLINE( 942)		this->width = width;
HXLINE( 943)		this->height = height;
HXLINE( 944)		this->x = x;
HXLINE( 945)		this->y = y;
            	}

Dynamic WindowEventInfo_obj::__CreateEmpty() { return new WindowEventInfo_obj; }

void *WindowEventInfo_obj::_hx_vtable = 0;

Dynamic WindowEventInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< WindowEventInfo_obj > _hx_result = new WindowEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool WindowEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c165cb0;
}

 ::lime::_internal::backend::native::WindowEventInfo WindowEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_d8a53269ce4a50a3_950_clone)
HXDLIN( 950)		return  ::lime::_internal::backend::native::WindowEventInfo_obj::__alloc( HX_CTX ,this->type,this->windowID,this->width,this->height,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(WindowEventInfo_obj,clone,return )


WindowEventInfo_obj::WindowEventInfo_obj()
{
}

::hx::Val WindowEventInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { return ::hx::Val( windowID ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val WindowEventInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { windowID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("windowID",cb,af,cd,7d));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo WindowEventInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(WindowEventInfo_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(WindowEventInfo_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsInt,(int)offsetof(WindowEventInfo_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(WindowEventInfo_obj,windowID),HX_("windowID",cb,af,cd,7d)},
	{::hx::fsInt,(int)offsetof(WindowEventInfo_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(WindowEventInfo_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *WindowEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String WindowEventInfo_obj_sMemberFields[] = {
	HX_("height",e7,07,4c,02),
	HX_("type",ba,f2,08,4d),
	HX_("width",06,b6,62,ca),
	HX_("windowID",cb,af,cd,7d),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class WindowEventInfo_obj::__mClass;

void WindowEventInfo_obj::__register()
{
	WindowEventInfo_obj _hx_dummy;
	WindowEventInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.WindowEventInfo",c6,25,cd,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(WindowEventInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< WindowEventInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindowEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindowEventInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
