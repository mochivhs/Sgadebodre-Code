// Generated by Haxe 4.1.5
#ifndef INCLUDED_gameObjects_userInterface_menu_MenuCharacter
#define INCLUDED_gameObjects_userInterface_menu_MenuCharacter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(gameObjects,userInterface,menu,MenuCharacter)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace gameObjects{
namespace userInterface{
namespace menu{


class HXCPP_CLASS_ATTRIBUTES MenuCharacter_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef MenuCharacter_obj OBJ_;
		MenuCharacter_obj();

	public:
		enum { _hx_ClassId = 0x69a05737 };

		void __construct(Float x,::String __o_newCharacter);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="gameObjects.userInterface.menu.MenuCharacter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"gameObjects.userInterface.menu.MenuCharacter"); }
		static ::hx::ObjectPtr< MenuCharacter_obj > __new(Float x,::String __o_newCharacter);
		static ::hx::ObjectPtr< MenuCharacter_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,::String __o_newCharacter);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MenuCharacter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MenuCharacter",ea,99,ab,10); }

		::String character;
		 ::haxe::ds::StringMap curCharacterMap;
		Float baseX;
		Float baseY;
		void createCharacter(::String newCharacter,::hx::Null< bool >  canChange);
		::Dynamic createCharacter_dyn();

};

} // end namespace gameObjects
} // end namespace userInterface
} // end namespace menu

#endif /* INCLUDED_gameObjects_userInterface_menu_MenuCharacter */ 
