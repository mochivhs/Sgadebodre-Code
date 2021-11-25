// Generated by Haxe 4.1.5
#ifndef INCLUDED_gameObjects_Stage
#define INCLUDED_gameObjects_Stage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(gameObjects,Boyfriend)
HX_DECLARE_CLASS1(gameObjects,Character)
HX_DECLARE_CLASS1(gameObjects,Stage)
HX_DECLARE_CLASS2(gameObjects,background,BackgroundGirls)
HX_DECLARE_CLASS3(meta,data,dependency,FNFSprite)

namespace gameObjects{


class HXCPP_CLASS_ATTRIBUTES Stage_obj : public  ::flixel::group::FlxTypedGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedGroup_obj super;
		typedef Stage_obj OBJ_;
		Stage_obj();

	public:
		enum { _hx_ClassId = 0x22f577dc };

		void __construct(::String curStage);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="gameObjects.Stage")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"gameObjects.Stage"); }
		static ::hx::ObjectPtr< Stage_obj > __new(::String curStage);
		static ::hx::ObjectPtr< Stage_obj > __alloc(::hx::Ctx *_hx_ctx,::String curStage);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stage_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stage",9e,da,38,17); }

		 ::meta::data::dependency::FNFSprite halloweenBG;
		 ::flixel::group::FlxTypedGroup phillyCityLights;
		 ::meta::data::dependency::FNFSprite phillyTrain;
		 ::flixel::_hx_system::FlxSound trainSound;
		 ::meta::data::dependency::FNFSprite limo;
		 ::flixel::group::FlxTypedGroup grpLimoDancers;
		 ::meta::data::dependency::FNFSprite fastCar;
		 ::meta::data::dependency::FNFSprite upperBoppers;
		 ::meta::data::dependency::FNFSprite bottomBoppers;
		 ::meta::data::dependency::FNFSprite santa;
		 ::gameObjects::background::BackgroundGirls bgGirls;
		::String curStage;
		Float daPixelZoom;
		 ::flixel::group::FlxTypedGroup foreground;
		::String returnGFtype(::String curStage);
		::Dynamic returnGFtype_dyn();

		void dadPosition(::String curStage, ::gameObjects::Character dad, ::gameObjects::Character gf, ::flixel::math::FlxPoint camPos,::String songPlayer2);
		::Dynamic dadPosition_dyn();

		void repositionPlayers(::String curStage, ::gameObjects::Character boyfriend, ::gameObjects::Character dad, ::gameObjects::Character gf);
		::Dynamic repositionPlayers_dyn();

		int curLight;
		bool trainMoving;
		Float trainFrameTiming;
		int trainCars;
		bool trainFinishing;
		int trainCooldown;
		bool startedMoving;
		void stageUpdate(int curBeat, ::gameObjects::Boyfriend boyfriend, ::gameObjects::Character gf, ::gameObjects::Character dadOpponent);
		::Dynamic stageUpdate_dyn();

		void stageUpdateConstant(Float elapsed, ::gameObjects::Boyfriend boyfriend, ::gameObjects::Character gf, ::gameObjects::Character dadOpponent);
		::Dynamic stageUpdateConstant_dyn();

		void trainStart();
		::Dynamic trainStart_dyn();

		void updateTrainPos( ::gameObjects::Character gf);
		::Dynamic updateTrainPos_dyn();

		void trainReset( ::gameObjects::Character gf);
		::Dynamic trainReset_dyn();

		 ::Dynamic add( ::Dynamic _tmp_Object);

};

} // end namespace gameObjects

#endif /* INCLUDED_gameObjects_Stage */ 
