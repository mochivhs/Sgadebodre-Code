// Generated by Haxe 4.1.5
#ifndef INCLUDED_meta_MusicBeatState
#define INCLUDED_meta_MusicBeatState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_meta_data_dependency_FNFUIState
#include <meta/data/dependency/FNFUIState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionSet)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(meta,Controls)
HX_DECLARE_CLASS1(meta,MusicBeatState)
HX_DECLARE_CLASS3(meta,data,dependency,FNFUIState)

namespace meta{


class HXCPP_CLASS_ATTRIBUTES MusicBeatState_obj : public  ::meta::data::dependency::FNFUIState_obj
{
	public:
		typedef  ::meta::data::dependency::FNFUIState_obj super;
		typedef MusicBeatState_obj OBJ_;
		MusicBeatState_obj();

	public:
		enum { _hx_ClassId = 0x0f8d4977 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="meta.MusicBeatState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"meta.MusicBeatState"); }
		static ::hx::ObjectPtr< MusicBeatState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< MusicBeatState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MusicBeatState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MusicBeatState",76,df,84,5d); }

		Float lastBeat;
		Float lastStep;
		int curStep;
		int curBeat;
		 ::meta::Controls get_controls();
		::Dynamic get_controls_dyn();

		virtual void create();

		virtual void update(Float elapsed);

		void updateContents();
		::Dynamic updateContents_dyn();

		void updateBeat();
		::Dynamic updateBeat_dyn();

		void updateCurStep();
		::Dynamic updateCurStep_dyn();

		virtual void stepHit();
		::Dynamic stepHit_dyn();

		virtual void beatHit();
		::Dynamic beatHit_dyn();

};

} // end namespace meta

#endif /* INCLUDED_meta_MusicBeatState */ 
