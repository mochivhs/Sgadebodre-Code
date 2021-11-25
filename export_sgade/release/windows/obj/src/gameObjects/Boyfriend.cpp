// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_gameObjects_Boyfriend
#include <gameObjects/Boyfriend.h>
#endif
#ifndef INCLUDED_gameObjects_Character
#include <gameObjects/Character.h>
#endif
#ifndef INCLUDED_meta_data_dependency_FNFSprite
#include <meta/data/dependency/FNFSprite.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9b12919b7f3bca9_10_new,"gameObjects.Boyfriend","new",0x9ab070d0,"gameObjects.Boyfriend.new","gameObjects/Boyfriend.hx",10,0x6d7a1621)
HX_LOCAL_STACK_FRAME(_hx_pos_c9b12919b7f3bca9_20_update,"gameObjects.Boyfriend","update",0xda54cb99,"gameObjects.Boyfriend.update","gameObjects/Boyfriend.hx",20,0x6d7a1621)
namespace gameObjects{

void Boyfriend_obj::__construct(Float x,Float y,::String __o__hx_char){
            		::String _hx_char = __o__hx_char;
            		if (::hx::IsNull(__o__hx_char)) _hx_char = HX_("bf",c4,55,00,00);
            	HX_STACKFRAME(&_hx_pos_c9b12919b7f3bca9_10_new)
HXLINE(  12)		this->stunned = false;
HXLINE(  16)		super::__construct(x,y,_hx_char,true);
            	}

Dynamic Boyfriend_obj::__CreateEmpty() { return new Boyfriend_obj; }

void *Boyfriend_obj::_hx_vtable = 0;

Dynamic Boyfriend_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Boyfriend_obj > _hx_result = new Boyfriend_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Boyfriend_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x450529ec) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x194bcfc7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x194bcfc7;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x450529ec;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x78a693e9 || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

void Boyfriend_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c9b12919b7f3bca9_20_update)
HXLINE(  21)		if (!(this->debugMode)) {
HXLINE(  23)			if (::StringTools_obj::startsWith(this->animation->_curAnim->name,HX_("sing",4f,96,53,4c))) {
HXLINE(  25)				 ::gameObjects::Boyfriend _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  25)				_hx_tmp->holdTimer = (_hx_tmp->holdTimer + elapsed);
            			}
            			else {
HXLINE(  28)				this->holdTimer = ( (Float)(0) );
            			}
HXLINE(  30)			bool _hx_tmp;
HXDLIN(  30)			bool _hx_tmp1;
HXDLIN(  30)			if (::StringTools_obj::endsWith(this->animation->_curAnim->name,HX_("miss",fc,52,5c,48))) {
HXLINE(  30)				_hx_tmp1 = this->animation->_curAnim->finished;
            			}
            			else {
HXLINE(  30)				_hx_tmp1 = false;
            			}
HXDLIN(  30)			if (_hx_tmp1) {
HXLINE(  30)				_hx_tmp = !(this->debugMode);
            			}
            			else {
HXLINE(  30)				_hx_tmp = false;
            			}
HXDLIN(  30)			if (_hx_tmp) {
HXLINE(  32)				this->playAnim(HX_("idle",14,a7,b3,45),true,false,10);
            			}
HXLINE(  35)			bool _hx_tmp2;
HXDLIN(  35)			if ((this->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE(  35)				_hx_tmp2 = this->animation->_curAnim->finished;
            			}
            			else {
HXLINE(  35)				_hx_tmp2 = false;
            			}
HXDLIN(  35)			if (_hx_tmp2) {
HXLINE(  37)				this->playAnim(HX_("deathLoop",b8,0b,79,2e),null(),null(),null());
            			}
            		}
HXLINE(  41)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< Boyfriend_obj > Boyfriend_obj::__new(Float x,Float y,::String __o__hx_char) {
	::hx::ObjectPtr< Boyfriend_obj > __this = new Boyfriend_obj();
	__this->__construct(x,y,__o__hx_char);
	return __this;
}

::hx::ObjectPtr< Boyfriend_obj > Boyfriend_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o__hx_char) {
	Boyfriend_obj *__this = (Boyfriend_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Boyfriend_obj), true, "gameObjects.Boyfriend"));
	*(void **)__this = Boyfriend_obj::_hx_vtable;
	__this->__construct(x,y,__o__hx_char);
	return __this;
}

Boyfriend_obj::Boyfriend_obj()
{
}

::hx::Val Boyfriend_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"stunned") ) { return ::hx::Val( stunned ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Boyfriend_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"stunned") ) { stunned=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Boyfriend_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("stunned",53,5b,75,b6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Boyfriend_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Boyfriend_obj,stunned),HX_("stunned",53,5b,75,b6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Boyfriend_obj_sStaticStorageInfo = 0;
#endif

static ::String Boyfriend_obj_sMemberFields[] = {
	HX_("stunned",53,5b,75,b6),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Boyfriend_obj::__mClass;

void Boyfriend_obj::__register()
{
	Boyfriend_obj _hx_dummy;
	Boyfriend_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gameObjects.Boyfriend",de,08,5c,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Boyfriend_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Boyfriend_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Boyfriend_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Boyfriend_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace gameObjects
