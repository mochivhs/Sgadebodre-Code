// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_gameObjects_userInterface_menu_MenuItem
#include <gameObjects/userInterface/menu/MenuItem.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_897930f6d0e6702d_10_new,"gameObjects.userInterface.menu.MenuItem","new",0x46a20ca7,"gameObjects.userInterface.menu.MenuItem.new","gameObjects/userInterface/menu/MenuItem.hx",10,0x9604b60a)
HX_LOCAL_STACK_FRAME(_hx_pos_897930f6d0e6702d_27_startFlashing,"gameObjects.userInterface.menu.MenuItem","startFlashing",0xf144e2bb,"gameObjects.userInterface.menu.MenuItem.startFlashing","gameObjects/userInterface/menu/MenuItem.hx",27,0x9604b60a)
HX_LOCAL_STACK_FRAME(_hx_pos_897930f6d0e6702d_38_update,"gameObjects.userInterface.menu.MenuItem","update",0x7d32f022,"gameObjects.userInterface.menu.MenuItem.update","gameObjects/userInterface/menu/MenuItem.hx",38,0x9604b60a)
namespace gameObjects{
namespace userInterface{
namespace menu{

void MenuItem_obj::__construct(Float x,Float y,::hx::Null< int >  __o_weekNum){
            		int weekNum = __o_weekNum.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_897930f6d0e6702d_10_new)
HXLINE(  35)		this->fakeFramerate = ::Math_obj::round(((( (Float)(1) ) / ::flixel::FlxG_obj::elapsed) / ( (Float)(10) )));
HXLINE(  23)		this->isFlashing = false;
HXLINE(  14)		this->flashingInt = 0;
HXLINE(  12)		this->targetY = ((Float)0);
HXLINE(  18)		super::__construct(x,y,null());
HXLINE(  19)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  19)		::String library = null();
HXDLIN(  19)		this->week = _hx_tmp->loadGraphic(::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + (HX_("menus/base/storymenu/weeks/week",82,0f,17,fb) + weekNum)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library),null(),null(),null(),null(),null());
HXLINE(  20)		this->add(this->week);
            	}

Dynamic MenuItem_obj::__CreateEmpty() { return new MenuItem_obj; }

void *MenuItem_obj::_hx_vtable = 0;

Dynamic MenuItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuItem_obj > _hx_result = new MenuItem_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MenuItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7d34c77d || inClassId==(int)0x7dab0655;
	}
}

void MenuItem_obj::startFlashing(){
            	HX_STACKFRAME(&_hx_pos_897930f6d0e6702d_27_startFlashing)
HXDLIN(  27)		this->isFlashing = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MenuItem_obj,startFlashing,(void))

void MenuItem_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_897930f6d0e6702d_38_update)
HXLINE(  39)		this->super::update(elapsed);
HXLINE(  40)		Float lerpVal = ::Main_obj::framerateAdjust(((Float)0.17));
HXLINE(  41)		Float a = this->y;
HXDLIN(  41)		this->set_y((a + (lerpVal * (((this->targetY * ( (Float)(120) )) + 480) - a))));
HXLINE(  43)		if (this->isFlashing) {
HXLINE(  44)			 ::gameObjects::userInterface::menu::MenuItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  44)			_hx_tmp->flashingInt = (_hx_tmp->flashingInt + 1);
            		}
HXLINE(  46)		if ((::hx::Mod(this->flashingInt,this->fakeFramerate) >= ::Math_obj::floor((( (Float)(this->fakeFramerate) ) / ( (Float)(2) ))))) {
HXLINE(  47)			this->week->set_color(-13369345);
            		}
            		else {
HXLINE(  49)			this->week->set_color(-1);
            		}
            	}



::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__new(Float x,Float y,::hx::Null< int >  __o_weekNum) {
	::hx::ObjectPtr< MenuItem_obj > __this = new MenuItem_obj();
	__this->__construct(x,y,__o_weekNum);
	return __this;
}

::hx::ObjectPtr< MenuItem_obj > MenuItem_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::hx::Null< int >  __o_weekNum) {
	MenuItem_obj *__this = (MenuItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuItem_obj), true, "gameObjects.userInterface.menu.MenuItem"));
	*(void **)__this = MenuItem_obj::_hx_vtable;
	__this->__construct(x,y,__o_weekNum);
	return __this;
}

MenuItem_obj::MenuItem_obj()
{
}

void MenuItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuItem);
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(week,"week");
	HX_MARK_MEMBER_NAME(flashingInt,"flashingInt");
	HX_MARK_MEMBER_NAME(isFlashing,"isFlashing");
	HX_MARK_MEMBER_NAME(fakeFramerate,"fakeFramerate");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(week,"week");
	HX_VISIT_MEMBER_NAME(flashingInt,"flashingInt");
	HX_VISIT_MEMBER_NAME(isFlashing,"isFlashing");
	HX_VISIT_MEMBER_NAME(fakeFramerate,"fakeFramerate");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"week") ) { return ::hx::Val( week ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFlashing") ) { return ::hx::Val( isFlashing ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashingInt") ) { return ::hx::Val( flashingInt ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startFlashing") ) { return ::hx::Val( startFlashing_dyn() ); }
		if (HX_FIELD_EQ(inName,"fakeFramerate") ) { return ::hx::Val( fakeFramerate ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"week") ) { week=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isFlashing") ) { isFlashing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"flashingInt") ) { flashingInt=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fakeFramerate") ) { fakeFramerate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("week",f4,5f,f5,4e));
	outFields->push(HX_("flashingInt",dd,0a,bd,91));
	outFields->push(HX_("isFlashing",3c,97,97,14));
	outFields->push(HX_("fakeFramerate",38,6f,b1,5e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuItem_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MenuItem_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MenuItem_obj,week),HX_("week",f4,5f,f5,4e)},
	{::hx::fsInt,(int)offsetof(MenuItem_obj,flashingInt),HX_("flashingInt",dd,0a,bd,91)},
	{::hx::fsBool,(int)offsetof(MenuItem_obj,isFlashing),HX_("isFlashing",3c,97,97,14)},
	{::hx::fsInt,(int)offsetof(MenuItem_obj,fakeFramerate),HX_("fakeFramerate",38,6f,b1,5e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuItem_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuItem_obj_sMemberFields[] = {
	HX_("targetY",e8,f3,67,88),
	HX_("week",f4,5f,f5,4e),
	HX_("flashingInt",dd,0a,bd,91),
	HX_("isFlashing",3c,97,97,14),
	HX_("startFlashing",b4,e7,a3,9e),
	HX_("fakeFramerate",38,6f,b1,5e),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class MenuItem_obj::__mClass;

void MenuItem_obj::__register()
{
	MenuItem_obj _hx_dummy;
	MenuItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gameObjects.userInterface.menu.MenuItem",35,2d,0f,e8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuItem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace gameObjects
} // end namespace userInterface
} // end namespace menu
