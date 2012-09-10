//--------------------------------------------------------------------------------
/// @author Maxime GRIOT
//--------------------------------------------------------------------------------

#pragma once

namespace Skyrim
{
	namespace Overlay
	{
		//--------------------------------------------------------------------------------
		/// @brief A chat interface for the client
		//--------------------------------------------------------------------------------
		class Login
		{
			public:

				//--------------------------------------------------------------------------------
				/// @brief Hides the chat
				//--------------------------------------------------------------------------------
				void	Hide();

				//--------------------------------------------------------------------------------
				/// @brief Shows the chat
				//--------------------------------------------------------------------------------
				void	Show();

				//--------------------------------------------------------------------------------
				/// @brief Set the console's visibility
				/// @param n self explanatory
				//--------------------------------------------------------------------------------
				void	SetVisible(bool isVisible);

				//--------------------------------------------------------------------------------
				/// @brief Is the console visible or not
				/// @return visibility
				//--------------------------------------------------------------------------------
				bool	IsVisible();

				bool Setup(){return true;}

				void Destroy(){}

				//--------------------------------------------------------------------------------
				/// @brief Handles an edit box accept event.
				/// @param _widget The widget firing the event.
				//--------------------------------------------------------------------------------
				void Handle_Click(MyGUI::WidgetPtr _widget);

				//--------------------------------------------------------------------------------
				/// @brief Constructor, do not call
				//--------------------------------------------------------------------------------
				Login(MyGUI::Gui*);

				//--------------------------------------------------------------------------------
				/// @brief Destructor, do not call
				//--------------------------------------------------------------------------------
				~Login();

				boost::signal<void(std::string, std::string)> OnLogin;

			private:
				bool mVisible;

				//--------------------------------------------------------------------------------
				/// @brief The login's edit box
				//--------------------------------------------------------------------------------
				MyGUI::EditPtr			mEditUser;
				MyGUI::EditPtr			mEditPass;

				MyGUI::StaticTextPtr	mUserText;
				MyGUI::StaticTextPtr	mPassText;

				MyGUI::ButtonPtr		mSubmit;

				MyGUI::Gui*				mUI;
		};
	}
}