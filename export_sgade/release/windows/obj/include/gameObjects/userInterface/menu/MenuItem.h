// Generated by Haxe 4.1.5
#ifndef INCLUDED_gameObjects_userInterface_menu_MenuItem
#define INCLUDED_gameObjects_userInterface_menu_MenuItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(gameObjects,userInterface,menu,MenuItem)

namespace gameObjects{
namespace userInterface{
namespace menu{


class HXCPP_CLASS_ATTRIBUTES MenuItem_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef MenuItem_obj OBJ_;
		MenuItem_obj();

	public:
		enum { _hx_ClassId = 0x7d34c77d };

		void __construct(Float x,Float y,::hx::Null< int >  __o_weekNum);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="gameObjects.userInterface.menu.MenuItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"gameObjects.userInterface.menu.MenuItem"); }
		static ::hx::ObjectPtr< MenuItem_obj > __new(Float x,Float y,::hx::Null< int >  __o_weekNum);
		static ::hx::ObjectPtr< MenuItem_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::hx::Null< int >  __o_weekNum);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuItem",72,ae,e0,25); }

		Float targetY;
		 ::flixel::FlxSprite week;
		int flashingInt;
		bool isFlashing;
		void startFlashing();
		::Dynamic startFlashing_dyn();

		int fakeFramerate;
		void update(Float elapsed);

};

} // end namespace gameObjects
} // end namespace userInterface
} // end namespace menu

#endif /* INCLUDED_gameObjects_userInterface_menu_MenuItem */ 
