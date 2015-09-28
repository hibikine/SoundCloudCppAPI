/*Soundcloud API Wrapper Class Hibikine Kage 27-09-2015*/
#ifndef SOUNDCLOUD_OAUTH_H
#define SOUNDCLOUD_OAUTH_H

#include <string>
#include <unordered_map>
#include <unordered_set>
namespace Soundcloud{

	class SoundCloud{
	public:
		SoundCloud();
		std::unordered_map<std::string, std::string> Connect(
			std::string client_id,		// The client id belonging to your application
			std::string redirect_url,	// The redirect uri you have configured for your application
			std::string responce_type,	// (code, token)
			std::string scope,			// '*'
			std::string display,		// Can specify a value of 'popup' for mobile optimized screen
			std::string state);			// Any value included here will be appended to the redirect URI

		std::unordered_map<std::string, std::string> get_oauth_token(
			std::string client_id,		// The client id belonging to your application
			std::string client_secret,	// The client secret belonging to your application
			std::string redirect_url,	// The redirect uri you have configured for your application
			std::string grant_type,		// (authorization_code, refresh_token, password, client_credentials, oauth1_token)
			std::string code);			// The authorization code obtained when user is sent to redirect_uri

		std::unordered_map<std::string, std::string> get_users(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_users_tracks(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_users_playlists(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_users_followings(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_users_followings(
			unsigned long int following_user_id,
			unsigned long int followed_user_id,
			std::string q = "");

		// /followings

		int put_users_followings(
			unsigned long int following_user_id,
			unsigned long int followed_user_id,
			std::string q = "");

		int delete_users_followings(
			unsigned long int following_user_id,
			unsigned long int followed_user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_users_followers(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_users_followers(
			unsigned long int followed_user_id,
			unsigned long int following_user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_users_comments(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_users_favorites(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_users_favorites(
			unsigned long int user_id,
			unsigned long int track_id,
			std::string q = "");

		int put_users_favorites(
			unsigned long int user_id,
			unsigned long int track_id,
			std::string q = "");

		int delete_users_favorites(
			unsigned long int user_id,
			unsigned long int track_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_users_groups(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_users_web_profiles(
			unsigned long int user_id,
			std::string q = "");

		int put_users_web_profiles(
			unsigned long int user_id,
			std::unordered_map<std::string, std::string> *,
			std::string q = "");

		int delete_users_web_profiles(
			unsigned long int user_id,
			std::unordered_map<std::string, std::string> *,
			std::string q = "");

		std::unordered_map<std::string, std::string> tracks(
			unsigned long int track_id,
			std::string q = "",
			std::string tags = "",
			std::string filter = "",
			std::string license = "",
			double bpm_from = 0.0,
			double bpm_to = 0.0,
			double duration_from = 0.0,
			double duration_to = 0.0,
			tm *created_at_from = nullptr,
			tm *created_at_to = nullptr,
			std::unordered_set<unsigned long int> *ids = nullptr,
			std::unordered_set<unsigned long int> *genres = nullptr,
			std::string types = ""
			);

		std::unordered_map<std::string, std::string> get_playlists(
			unsigned long int playlist_id,
			std::string q = "",
			std::string representation = "");

		std::string get_playlists_secret_token(
			unsigned long int playlist_id);

		int put_playlists_secret_token(
			unsigned long int playlist_id,
			std::string secret_token);

		std::unordered_map < std::string, std::string > get_groups(
			unsigned long int group_id,
			std::string q="");

		std::unordered_map < std::string, std::string > get_comments();

		std::unordered_map<std::string, std::string> get_me(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_tracks(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_playlists(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_followings(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_followings(
			unsigned long int following_user_id,
			unsigned long int followed_user_id,
			std::string q = "");

		int put_me_followings(
			unsigned long int following_user_id,
			unsigned long int followed_user_id,
			std::string q = "");

		int delete_me_followings(
			unsigned long int following_user_id,
			unsigned long int followed_user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_followers(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_followers(
			unsigned long int followed_user_id,
			unsigned long int following_user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_comments(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_favorites(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_favorites(
			unsigned long int user_id,
			unsigned long int track_id,
			std::string q = "");

		int put_me_favorites(
			unsigned long int user_id,
			unsigned long int track_id,
			std::string q = "");

		int delete_me_favorites(
			unsigned long int user_id,
			unsigned long int track_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_groups(
			unsigned long int user_id,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_web_profiles(
			unsigned long int user_id,
			std::string q = "");

		int put_me_web_profiles(
			unsigned long int user_id,
			std::unordered_map<std::string, std::string> *,
			std::string q = "");

		int delete_me_web_profiles(
			unsigned long int user_id,
			std::unordered_map<std::string, std::string> *,
			std::string q = "");

		std::unordered_map<std::string, std::string> get_me_activities(
			unsigned long int id);

		std::unordered_map < std::string, std::string > get_me_connections();

		int post_me_connections(
			unsigned long int id,
			std::string service,
			std::string redirect_url);

		std::unordered_map<std::string, std::string> get_me_connections(
			unsigned long int connection_id);

		std::unordered_map<std::string, std::string> get_me_activities(
			unsigned long int limit);

		std::unordered_map<std::string, std::string> get_me_activities_tracks_affiliated(
			unsigned long int limit);

		std::unordered_map<std::string, std::string> get_me_activities_tracks_exclusive(
			unsigned long int limit);

		std::unordered_map<std::string, std::string> get_me_activities_all_own(
			unsigned long int limit);

		std::unordered_map<std::string, std::string> get_apps();

		int Resolve(
			std::string url);

		std::unordered_map<std::string, std::string> get_oembed(
			std::string url,
			std::string format = "",
			std::string callback = "",
			int maxwidth = -1,
			int maxheight = -1,
			std::string color = "",
			bool auto_play = false, 
			bool show_comments = true, 
			bool iframe = true);
}
#endif

//https://soundcloud.com/connect?&client_id=609ae0b573913db156968e0ec38c1e26&redirect_uri=http%3A%2F%2Fdevelopers.soundcloud.com%2Fcallback.html&response_type=code_and_token&scope=non-expiring&display=popup