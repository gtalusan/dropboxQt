/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "users"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"

namespace dropboxQt{
namespace users{
    class Name{
        /**
            Representations for a person's name to assist with
            internationalization.

            field: given_name: Also known as a first name.
            field: surname: Also known as a last name or family name.
            field: familiar_name: Locale-dependent name. In the US, a person's
                familiar name is their ``given_name``, but elsewhere, it could
                be any combination of a person's ``given_name`` and ``surname``.
            field: display_name: A name that can be used directly to represent
                the name of a user's Dropbox account.
            field: abbreviated_name: An abbreviated form of the person's name.
                Their initials in most locales.
        */

    public:
        Name(){};

        Name(const QString& arg){ m_given_name = arg; };

    public:
        ///Also known as a first name.
        QString givenName()const{return m_given_name;};
        Name& setGivenname(const QString& arg){m_given_name=arg; return *this;};

        ///Also known as a last name or family name.
        QString surname()const{return m_surname;};
        Name& setSurname(const QString& arg){m_surname=arg; return *this;};

        ///Locale-dependent name. In the US, a person's familiar name is their :field:`given_name`, but elsewhere, it could be any combination of a person's :field:`given_name` and :field:`surname`.
        QString familiarName()const{return m_familiar_name;};
        Name& setFamiliarname(const QString& arg){m_familiar_name=arg; return *this;};

        ///A name that can be used directly to represent the name of a user's Dropbox account.
        QString displayName()const{return m_display_name;};
        Name& setDisplayname(const QString& arg){m_display_name=arg; return *this;};

        ///An abbreviated form of the person's name. Their initials in most locales.
        QString abbreviatedName()const{return m_abbreviated_name;};
        Name& setAbbreviatedname(const QString& arg){m_abbreviated_name=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static Name EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Also known as a first name.
        QString m_given_name;

        ///Also known as a last name or family name.
        QString m_surname;

        ///Locale-dependent name. In the US, a person's familiar name is their :field:`given_name`, but elsewhere, it could be any combination of a person's :field:`given_name` and :field:`surname`.
        QString m_familiar_name;

        ///A name that can be used directly to represent the name of a user's Dropbox account.
        QString m_display_name;

        ///An abbreviated form of the person's name. Their initials in most locales.
        QString m_abbreviated_name;

    };//Name

}//users
}//dropboxQt
