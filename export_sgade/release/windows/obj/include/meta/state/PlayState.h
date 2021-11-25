// Generated by Haxe 4.1.5
#ifndef INCLUDED_meta_state_PlayState
#define INCLUDED_meta_state_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_meta_MusicBeatState
#include <meta/MusicBeatState.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,FlxSubState)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,transition,TransitionData)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(gameObjects,Boyfriend)
HX_DECLARE_CLASS1(gameObjects,Character)
HX_DECLARE_CLASS1(gameObjects,Stage)
HX_DECLARE_CLASS2(gameObjects,userInterface,ClassHUD)
HX_DECLARE_CLASS2(gameObjects,userInterface,DialogueBox)
HX_DECLARE_CLASS3(gameObjects,userInterface,notes,Note)
HX_DECLARE_CLASS3(gameObjects,userInterface,notes,Strumline)
HX_DECLARE_CLASS3(gameObjects,userInterface,notes,UIStaticArrow)
HX_DECLARE_CLASS1(meta,MusicBeatState)
HX_DECLARE_CLASS3(meta,data,dependency,FNFSprite)
HX_DECLARE_CLASS3(meta,data,dependency,FNFUIState)
HX_DECLARE_CLASS2(meta,state,PlayState)

namespace meta{
namespace state{


class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::meta::MusicBeatState_obj
{
	public:
		typedef  ::meta::MusicBeatState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x3acadfb1 };

		void __construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="meta.state.PlayState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"meta.state.PlayState"); }
		static ::hx::ObjectPtr< PlayState_obj > __new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static ::hx::ObjectPtr< PlayState_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PlayState",5d,83,c2,46); }

		static void __boot();
		static  ::flixel::util::FlxTimer startTimer;
		static ::String curStage;
		static  ::Dynamic SONG;
		static bool isStoryMode;
		static int storyWeek;
		static ::Array< ::String > storyPlaylist;
		static int storyDifficulty;
		static  ::flixel::_hx_system::FlxSound songMusic;
		static  ::flixel::_hx_system::FlxSound vocals;
		static int campaignScore;
		static  ::gameObjects::Character dadOpponent;
		static  ::gameObjects::Character gf;
		static  ::gameObjects::Boyfriend boyfriend;
		static ::String assetModifier;
		static ::String changeableSkin;
		static ::String songDetails;
		static ::String detailsSub;
		static ::String detailsPausedText;
		static  ::flixel::FlxObject prevCamFollow;
		static Float health;
		static int combo;
		static int misses;
		static  ::flixel::FlxCamera camHUD;
		static  ::flixel::FlxCamera camGame;
		static  ::flixel::FlxCamera dialogueHUD;
		static Float defaultCamZoom;
		static ::Array< Float > forceZoom;
		static int songScore;
		static ::String iconRPC;
		static Float songLength;
		static  ::gameObjects::userInterface::ClassHUD uiHUD;
		static Float daPixelZoom;
		static ::String determinedChartType;
		static  ::flixel::group::FlxTypedGroup strumLines;
		static ::Array< ::Dynamic> strumHUD;
		static  ::flixel::FlxSprite lastRating;
		static ::Array< ::Dynamic> lastCombo;
		static void updateRPC(bool pausedRPC);
		static ::Dynamic updateRPC_dyn();

		static void resetMusic();
		static ::Dynamic resetMusic_dyn();

		static bool skipCutscenes();
		static ::Dynamic skipCutscenes_dyn();

		static int swagCounter;
		::Array< ::Dynamic> unspawnNotes;
		::Array< ::String > ratingArray;
		bool allSicks;
		int numberOfKeys;
		int curSection;
		 ::flixel::FlxObject camFollow;
		::String curSong;
		int gfSpeed;
		bool generatedMusic;
		bool startingSong;
		bool paused;
		bool startedCountdown;
		bool inCutscene;
		bool canPause;
		int previousFrameTime;
		int lastReportedPlayheadPosition;
		Float songTime;
		Float camDisplaceX;
		Float camDisplaceY;
		::String storyDifficultyText;
		 ::gameObjects::Stage stageBuild;
		 ::gameObjects::userInterface::notes::Strumline dadStrums;
		 ::gameObjects::userInterface::notes::Strumline boyfriendStrums;
		::Array< ::Dynamic> allUIs;
		void create();

		int staticDisplace;
		void update(Float elapsed);

		void noteCalls();
		::Dynamic noteCalls_dyn();

		void controlPlayer( ::gameObjects::Character character,bool autoplay, ::gameObjects::userInterface::notes::Strumline characterStrums,::Array< bool > holdControls,::Array< bool > pressControls,::Array< bool > releaseControls);
		::Dynamic controlPlayer_dyn();

		void goodNoteHit( ::gameObjects::userInterface::notes::Note coolNote, ::gameObjects::Character character, ::gameObjects::userInterface::notes::Strumline characterStrums, ::Dynamic canDisplayJudgement);
		::Dynamic goodNoteHit_dyn();

		void missNoteCheck( ::Dynamic includeAnimation,::hx::Null< int >  direction, ::gameObjects::Character character,::hx::Null< bool >  popMiss,::hx::Null< bool >  lockMiss);
		::Dynamic missNoteCheck_dyn();

		void characterPlayAnimation( ::gameObjects::userInterface::notes::Note coolNote, ::gameObjects::Character character);
		::Dynamic characterPlayAnimation_dyn();

		void strumCallsAuto( ::gameObjects::userInterface::notes::UIStaticArrow cStrum, ::Dynamic callType, ::gameObjects::userInterface::notes::Note daNote);
		::Dynamic strumCallsAuto_dyn();

		void mainControls( ::gameObjects::userInterface::notes::Note daNote, ::gameObjects::Character _hx_char, ::gameObjects::userInterface::notes::Strumline strumline,bool autoplay);
		::Dynamic mainControls_dyn();

		void strumCameraRoll( ::flixel::group::FlxTypedGroup cStrum,bool mustHit);
		::Dynamic strumCameraRoll_dyn();

		void onFocus();

		void onFocusLost();

		::Array< ::Dynamic> animationsPlay;
		::String ratingTiming;
		void popUpScore(::String baseRating,::String timing, ::gameObjects::userInterface::notes::Strumline strumline, ::gameObjects::userInterface::notes::Note coolNote);
		::Dynamic popUpScore_dyn();

		void createSplash( ::gameObjects::userInterface::notes::Note coolNote, ::gameObjects::userInterface::notes::Strumline strumline);
		::Dynamic createSplash_dyn();

		int createdColor;
		void popUpCombo( ::Dynamic preload);
		::Dynamic popUpCombo_dyn();

		void decreaseCombo( ::Dynamic popMiss);
		::Dynamic decreaseCombo_dyn();

		void increaseCombo(::String baseRating, ::Dynamic direction, ::gameObjects::Character character);
		::Dynamic increaseCombo_dyn();

		void displayRating(::String daRating,::String timing, ::Dynamic cache);
		::Dynamic displayRating_dyn();

		void healthCall( ::Dynamic ratingMultiplier);
		::Dynamic healthCall_dyn();

		void startSong();
		::Dynamic startSong_dyn();

		void generateSong(::String dataPath);
		::Dynamic generateSong_dyn();

		int sortByShit( ::gameObjects::userInterface::notes::Note Obj1, ::gameObjects::userInterface::notes::Note Obj2);
		::Dynamic sortByShit_dyn();

		void resyncVocals();
		::Dynamic resyncVocals_dyn();

		void stepHit();

		void charactersDance(int curBeat);
		::Dynamic charactersDance_dyn();

		void beatHit();

		void openSubState( ::flixel::FlxSubState SubState);

		void closeSubState();

		bool endSongEvent;
		void endSong();
		::Dynamic endSong_dyn();

		void songEndSpecificActions();
		::Dynamic songEndSpecificActions_dyn();

		void callDefaultSongEnd();
		::Dynamic callDefaultSongEnd_dyn();

		 ::gameObjects::userInterface::DialogueBox dialogueBox;
		void songIntroCutscene();
		::Dynamic songIntroCutscene_dyn();

		void callTextbox();
		::Dynamic callTextbox_dyn();

		void startCountdown();
		::Dynamic startCountdown_dyn();

		 ::Dynamic add( ::Dynamic _tmp_Object);

};

} // end namespace meta
} // end namespace state

#endif /* INCLUDED_meta_state_PlayState */ 