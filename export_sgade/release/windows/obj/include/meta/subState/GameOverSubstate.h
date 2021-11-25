// Generated by Haxe 4.1.5
#ifndef INCLUDED_meta_subState_GameOverSubstate
#define INCLUDED_meta_subState_GameOverSubstate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_meta_MusicBeatSubState
#include <meta/MusicBeatSubState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(gameObjects,Boyfriend)
HX_DECLARE_CLASS1(gameObjects,Character)
HX_DECLARE_CLASS1(meta,MusicBeatSubState)
HX_DECLARE_CLASS3(meta,data,dependency,FNFSprite)
HX_DECLARE_CLASS2(meta,subState,GameOverSubstate)

namespace meta{
namespace subState{


class HXCPP_CLASS_ATTRIBUTES GameOverSubstate_obj : public  ::meta::MusicBeatSubState_obj
{
	public:
		typedef  ::meta::MusicBeatSubState_obj super;
		typedef GameOverSubstate_obj OBJ_;
		GameOverSubstate_obj();

	public:
		enum { _hx_ClassId = 0x246c1a6d };

		void __construct(Float x,Float y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="meta.subState.GameOverSubstate")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"meta.subState.GameOverSubstate"); }
		static ::hx::ObjectPtr< GameOverSubstate_obj > __new(Float x,Float y);
		static ::hx::ObjectPtr< GameOverSubstate_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameOverSubstate_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GameOverSubstate",37,5d,9a,d7); }

		 ::gameObjects::Boyfriend bf;
		 ::flixel::FlxObject camFollow;
		::String stageSuffix;
		void update(Float elapsed);

		void beatHit();

		bool isEnding;
		void endBullshit();
		::Dynamic endBullshit_dyn();

};

} // end namespace meta
} // end namespace subState

#endif /* INCLUDED_meta_subState_GameOverSubstate */ 