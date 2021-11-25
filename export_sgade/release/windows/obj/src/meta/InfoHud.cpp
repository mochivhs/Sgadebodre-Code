// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_meta_InfoHud
#include <meta/InfoHud.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_system_System
#include <openfl/system/System.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d916aa8b916190c3_35_new,"meta.InfoHud","new",0x70ba3b12,"meta.InfoHud.new","meta/InfoHud.hx",35,0x1fcbb7df)
HX_LOCAL_STACK_FRAME(_hx_pos_d916aa8b916190c3_69___enterFrame,"meta.InfoHud","__enterFrame",0x17272e23,"meta.InfoHud.__enterFrame","meta/InfoHud.hx",69,0x1fcbb7df)
HX_LOCAL_STACK_FRAME(_hx_pos_d916aa8b916190c3_102_getFrames,"meta.InfoHud","getFrames",0xb6dab50e,"meta.InfoHud.getFrames","meta/InfoHud.hx",102,0x1fcbb7df)
HX_LOCAL_STACK_FRAME(_hx_pos_d916aa8b916190c3_108_getMemoryUsage,"meta.InfoHud","getMemoryUsage",0x3c4edff8,"meta.InfoHud.getMemoryUsage","meta/InfoHud.hx",108,0x1fcbb7df)
HX_LOCAL_STACK_FRAME(_hx_pos_d916aa8b916190c3_112_updateDisplayInfo,"meta.InfoHud","updateDisplayInfo",0x70188279,"meta.InfoHud.updateDisplayInfo","meta/InfoHud.hx",112,0x1fcbb7df)
HX_LOCAL_STACK_FRAME(_hx_pos_d916aa8b916190c3_23_boot,"meta.InfoHud","boot",0x2a527540,"meta.InfoHud.boot","meta/InfoHud.hx",23,0x1fcbb7df)
HX_LOCAL_STACK_FRAME(_hx_pos_d916aa8b916190c3_24_boot,"meta.InfoHud","boot",0x2a527540,"meta.InfoHud.boot","meta/InfoHud.hx",24,0x1fcbb7df)
HX_LOCAL_STACK_FRAME(_hx_pos_d916aa8b916190c3_25_boot,"meta.InfoHud","boot",0x2a527540,"meta.InfoHud.boot","meta/InfoHud.hx",25,0x1fcbb7df)
namespace meta{

void InfoHud_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color,::hx::Null< bool >  __o_hudDisplay){
            		Float x = __o_x.Default(10);
            		Float y = __o_y.Default(10);
            		int color = __o_color.Default(0);
            		bool hudDisplay = __o_hudDisplay.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_d916aa8b916190c3_35_new)
HXLINE(  36)		super::__construct();
HXLINE(  38)		this->display = hudDisplay;
HXLINE(  40)		this->set_x(x);
HXLINE(  41)		this->set_y(y);
HXLINE(  43)		::meta::InfoHud_obj::currentFPS = 0;
HXLINE(  44)		this->set_selectable(false);
HXLINE(  45)		this->mouseEnabled = false;
HXLINE(  47)		this->set_defaultTextFormat( ::openfl::text::TextFormat_obj::__alloc( HX_CTX ,(HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),16,color,null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
HXLINE(  49)		this->set_width(( (Float)(::Main_obj::gameWidth) ));
HXLINE(  50)		this->set_height(( (Float)(::Main_obj::gameHeight) ));
HXLINE(  52)		this->set_text(HX_("FPS: \nState: \nMemory:",eb,dc,82,38));
HXLINE(  54)		this->cacheCount = 0;
HXLINE(  55)		this->currentTime = ( (Float)(0) );
HXLINE(  56)		this->times = ::Array_obj< Float >::__new(0);
            	}

Dynamic InfoHud_obj::__CreateEmpty() { return new InfoHud_obj; }

void *InfoHud_obj::_hx_vtable = 0;

Dynamic InfoHud_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InfoHud_obj > _hx_result = new InfoHud_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool InfoHud_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5c37dfe4) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x5c37dfe4;
		}
	} else {
		return inClassId==(int)0x6b353933 || inClassId==(int)0x7f0de750;
	}
}

void InfoHud_obj::_hx___enterFrame(int _tmp_deltaTime){
            	HX_STACKFRAME(&_hx_pos_d916aa8b916190c3_69___enterFrame)
HXLINE(  70)		Float deltaTime = ( (Float)(_tmp_deltaTime) );
HXDLIN(  70)		 ::meta::InfoHud _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  70)		_hx_tmp->currentTime = (_hx_tmp->currentTime + deltaTime);
HXLINE(  71)		this->times->push(this->currentTime);
HXLINE(  73)		while((this->times->__get(0) < (this->currentTime - ( (Float)(1000) )))){
HXLINE(  75)			this->times->shift();
            		}
HXLINE(  79)		this->set_text(HX_("",00,00,00,00));
HXLINE(  80)		if (::meta::InfoHud_obj::displayFps) {
HXLINE(  82)			if (::Math_obj::isNaN(( (Float)(::flixel::FlxG_obj::updateFramerate) ))) {
HXLINE(  83)				::meta::InfoHud_obj::currentFPS = ::Math_obj::round((( (Float)((this->times->length + this->cacheCount)) ) / ( (Float)(2) )));
            			}
            			else {
HXLINE(  85)				::meta::InfoHud_obj::currentFPS = ::flixel::FlxG_obj::updateFramerate;
            			}
HXLINE(  86)			{
HXLINE(  86)				 ::meta::InfoHud _g = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  86)				::String _hx_tmp = _g->get_text();
HXDLIN(  86)				_g->set_text((_hx_tmp + ((HX_("FPS: ",af,da,2c,83) + ::meta::InfoHud_obj::currentFPS) + HX_("\n",0a,00,00,00))));
            			}
HXLINE(  87)			this->cacheCount = this->times->length;
            		}
HXLINE(  89)		if (::meta::InfoHud_obj::displayExtra) {
HXLINE(  90)			 ::meta::InfoHud _g = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  90)			::String _hx_tmp = _g->get_text();
HXDLIN(  90)			_g->set_text((_hx_tmp + ((HX_("State: ",d7,36,b3,03) + ::Std_obj::string(::Main_obj::mainClassState)) + HX_("\n",0a,00,00,00))));
            		}
HXLINE(  91)		if (::meta::InfoHud_obj::displayMemory) {
HXLINE(  93)			::meta::InfoHud_obj::memoryUsage = ( (Float)(::Math_obj::round((( (Float)(::openfl::_hx_system::System_obj::get_totalMemory()) ) / ((Float)1e+6)))) );
HXLINE(  94)			{
HXLINE(  94)				 ::meta::InfoHud _g = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  94)				::String _hx_tmp = _g->get_text();
HXDLIN(  94)				_g->set_text((_hx_tmp + ((HX_("Memory: ",07,3c,3b,66) + ::meta::InfoHud_obj::memoryUsage) + HX_(" mb",75,a7,18,00))));
            			}
            		}
            	}


int InfoHud_obj::currentFPS;

Float InfoHud_obj::memoryUsage;

bool InfoHud_obj::displayFps;

bool InfoHud_obj::displayMemory;

bool InfoHud_obj::displayExtra;

Float InfoHud_obj::getFrames(){
            	HX_STACKFRAME(&_hx_pos_d916aa8b916190c3_102_getFrames)
HXDLIN( 102)		return ( (Float)(::meta::InfoHud_obj::currentFPS) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InfoHud_obj,getFrames,return )

Float InfoHud_obj::getMemoryUsage(){
            	HX_STACKFRAME(&_hx_pos_d916aa8b916190c3_108_getMemoryUsage)
HXDLIN( 108)		return ::meta::InfoHud_obj::memoryUsage;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(InfoHud_obj,getMemoryUsage,return )

void InfoHud_obj::updateDisplayInfo(bool shouldDisplayFps,bool shouldDisplayExtra,bool shouldDisplayMemory){
            	HX_STACKFRAME(&_hx_pos_d916aa8b916190c3_112_updateDisplayInfo)
HXLINE( 113)		::meta::InfoHud_obj::displayFps = shouldDisplayFps;
HXLINE( 114)		::meta::InfoHud_obj::displayExtra = shouldDisplayExtra;
HXLINE( 115)		::meta::InfoHud_obj::displayMemory = shouldDisplayMemory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(InfoHud_obj,updateDisplayInfo,(void))


::hx::ObjectPtr< InfoHud_obj > InfoHud_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color,::hx::Null< bool >  __o_hudDisplay) {
	::hx::ObjectPtr< InfoHud_obj > __this = new InfoHud_obj();
	__this->__construct(__o_x,__o_y,__o_color,__o_hudDisplay);
	return __this;
}

::hx::ObjectPtr< InfoHud_obj > InfoHud_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< int >  __o_color,::hx::Null< bool >  __o_hudDisplay) {
	InfoHud_obj *__this = (InfoHud_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InfoHud_obj), true, "meta.InfoHud"));
	*(void **)__this = InfoHud_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_color,__o_hudDisplay);
	return __this;
}

InfoHud_obj::InfoHud_obj()
{
}

void InfoHud_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InfoHud);
	HX_MARK_MEMBER_NAME(cacheCount,"cacheCount");
	HX_MARK_MEMBER_NAME(currentTime,"currentTime");
	HX_MARK_MEMBER_NAME(times,"times");
	HX_MARK_MEMBER_NAME(display,"display");
	 ::openfl::text::TextField_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void InfoHud_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cacheCount,"cacheCount");
	HX_VISIT_MEMBER_NAME(currentTime,"currentTime");
	HX_VISIT_MEMBER_NAME(times,"times");
	HX_VISIT_MEMBER_NAME(display,"display");
	 ::openfl::text::TextField_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val InfoHud_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { return ::hx::Val( times ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { return ::hx::Val( display ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cacheCount") ) { return ::hx::Val( cacheCount ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { return ::hx::Val( currentTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return ::hx::Val( _hx___enterFrame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool InfoHud_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"getFrames") ) { outValue = getFrames_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { outValue = ( currentFPS ); return true; }
		if (HX_FIELD_EQ(inName,"displayFps") ) { outValue = ( displayFps ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"memoryUsage") ) { outValue = ( memoryUsage ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayExtra") ) { outValue = ( displayExtra ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayMemory") ) { outValue = ( displayMemory ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getMemoryUsage") ) { outValue = getMemoryUsage_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateDisplayInfo") ) { outValue = updateDisplayInfo_dyn(); return true; }
	}
	return false;
}

::hx::Val InfoHud_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"times") ) { times=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"display") ) { display=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cacheCount") ) { cacheCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentTime") ) { currentTime=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InfoHud_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"currentFPS") ) { currentFPS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"displayFps") ) { displayFps=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"memoryUsage") ) { memoryUsage=ioValue.Cast< Float >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayExtra") ) { displayExtra=ioValue.Cast< bool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayMemory") ) { displayMemory=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void InfoHud_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cacheCount",2d,ab,1b,8d));
	outFields->push(HX_("currentTime",e6,a4,8e,85));
	outFields->push(HX_("times",c6,bf,35,10));
	outFields->push(HX_("display",42,2a,4a,bb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InfoHud_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(InfoHud_obj,cacheCount),HX_("cacheCount",2d,ab,1b,8d)},
	{::hx::fsFloat,(int)offsetof(InfoHud_obj,currentTime),HX_("currentTime",e6,a4,8e,85)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(InfoHud_obj,times),HX_("times",c6,bf,35,10)},
	{::hx::fsBool,(int)offsetof(InfoHud_obj,display),HX_("display",42,2a,4a,bb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo InfoHud_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &InfoHud_obj::currentFPS,HX_("currentFPS",30,71,28,c7)},
	{::hx::fsFloat,(void *) &InfoHud_obj::memoryUsage,HX_("memoryUsage",60,7e,d8,7c)},
	{::hx::fsBool,(void *) &InfoHud_obj::displayFps,HX_("displayFps",c7,aa,c1,dd)},
	{::hx::fsBool,(void *) &InfoHud_obj::displayMemory,HX_("displayMemory",e3,86,22,c6)},
	{::hx::fsBool,(void *) &InfoHud_obj::displayExtra,HX_("displayExtra",ee,70,7b,83)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String InfoHud_obj_sMemberFields[] = {
	HX_("cacheCount",2d,ab,1b,8d),
	HX_("currentTime",e6,a4,8e,85),
	HX_("times",c6,bf,35,10),
	HX_("display",42,2a,4a,bb),
	HX_("__enterFrame",15,7f,e3,3a),
	::String(null()) };

static void InfoHud_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InfoHud_obj::currentFPS,"currentFPS");
	HX_MARK_MEMBER_NAME(InfoHud_obj::memoryUsage,"memoryUsage");
	HX_MARK_MEMBER_NAME(InfoHud_obj::displayFps,"displayFps");
	HX_MARK_MEMBER_NAME(InfoHud_obj::displayMemory,"displayMemory");
	HX_MARK_MEMBER_NAME(InfoHud_obj::displayExtra,"displayExtra");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InfoHud_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InfoHud_obj::currentFPS,"currentFPS");
	HX_VISIT_MEMBER_NAME(InfoHud_obj::memoryUsage,"memoryUsage");
	HX_VISIT_MEMBER_NAME(InfoHud_obj::displayFps,"displayFps");
	HX_VISIT_MEMBER_NAME(InfoHud_obj::displayMemory,"displayMemory");
	HX_VISIT_MEMBER_NAME(InfoHud_obj::displayExtra,"displayExtra");
};

#endif

::hx::Class InfoHud_obj::__mClass;

static ::String InfoHud_obj_sStaticFields[] = {
	HX_("currentFPS",30,71,28,c7),
	HX_("memoryUsage",60,7e,d8,7c),
	HX_("displayFps",c7,aa,c1,dd),
	HX_("displayMemory",e3,86,22,c6),
	HX_("displayExtra",ee,70,7b,83),
	HX_("getFrames",dc,38,dc,28),
	HX_("getMemoryUsage",6a,d1,76,04),
	HX_("updateDisplayInfo",47,84,17,92),
	::String(null())
};

void InfoHud_obj::__register()
{
	InfoHud_obj _hx_dummy;
	InfoHud_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("meta.InfoHud",20,0a,df,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InfoHud_obj::__GetStatic;
	__mClass->mSetStaticField = &InfoHud_obj::__SetStatic;
	__mClass->mMarkFunc = InfoHud_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InfoHud_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InfoHud_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InfoHud_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InfoHud_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InfoHud_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InfoHud_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InfoHud_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d916aa8b916190c3_23_boot)
HXDLIN(  23)		displayFps = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d916aa8b916190c3_24_boot)
HXDLIN(  24)		displayMemory = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d916aa8b916190c3_25_boot)
HXDLIN(  25)		displayExtra = true;
            	}
}

} // end namespace meta