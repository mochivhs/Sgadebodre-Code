// Generated by Haxe 4.1.5
#ifndef INCLUDED_gameObjects_Character
#define INCLUDED_gameObjects_Character

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_meta_data_dependency_FNFSprite
#include <meta/data/dependency/FNFSprite.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(gameObjects,Character)
HX_DECLARE_CLASS3(meta,data,dependency,FNFSprite)

namespace gameObjects{


class HXCPP_CLASS_ATTRIBUTES Character_obj : public  ::meta::data::dependency::FNFSprite_obj
{
	public:
		typedef  ::meta::data::dependency::FNFSprite_obj super;
		typedef Character_obj OBJ_;
		Character_obj();

	public:
		enum { _hx_ClassId = 0x194bcfc7 };

		void __construct(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="gameObjects.Character")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"gameObjects.Character"); }
		static ::hx::ObjectPtr< Character_obj > __new(Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer);
		static ::hx::ObjectPtr< Character_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_character, ::Dynamic __o_isPlayer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Character_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Character",89,bb,a4,e3); }

		bool quickDancer;
		bool debugMode;
		bool isPlayer;
		::String curCharacter;
		Float holdTimer;
		void setCharacter(Float x,Float y,::String character);
		::Dynamic setCharacter_dyn();

		void flipLeftRight();
		::Dynamic flipLeftRight_dyn();

		virtual void update(Float elapsed);

		bool danced;
		void dance( ::Dynamic forced);
		::Dynamic dance_dyn();

		void playAnim(::String AnimName,::hx::Null< bool >  Force,::hx::Null< bool >  Reversed,::hx::Null< int >  Frame);

		::String simplifyCharacter();
		::Dynamic simplifyCharacter_dyn();

};

} // end namespace gameObjects

#endif /* INCLUDED_gameObjects_Character */ 