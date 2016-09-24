/**********************************************************
 DO NOT EDIT
 This file was generated from stone specification "team"
***********************************************************/

#pragma once
#include "dropbox/endpoint/DropboxUtil.h"
#include "dropbox/team_common/TeamCommonGroupManagementType.h"
#include "dropbox/team_common/TeamCommonGroupManagementType.h"

namespace dropboxQt{
namespace team{
    class GroupCreateArg{
        /**
            field: group_name: Group name.
            field: group_external_id: The creator of a team can associate an
                arbitrary external ID to the group.
            field: group_management_type: Whether the team can be managed by
                selected users, or only by team admins
        */

    public:
        GroupCreateArg(){};

        GroupCreateArg(const QString& arg){ m_group_name = arg; };

    public:
        ///Group name.
        QString groupName()const{return m_group_name;};
        GroupCreateArg& setGroupname(const QString& arg){m_group_name=arg; return *this;};

        ///The creator of a team can associate an arbitrary external ID to the group.
        QString groupExternalId()const{return m_group_external_id;};
        GroupCreateArg& setGroupexternalid(const QString& arg){m_group_external_id=arg; return *this;};

        ///Whether the team can be managed by selected users, or only by team admins
        team_common::GroupManagementType groupManagementType()const{return m_group_management_type;};
        GroupCreateArg& setGroupmanagementtype(const team_common::GroupManagementType& arg){m_group_management_type=arg; return *this;};

    public:
        operator QJsonObject ()const;
        void toJson(QJsonObject& js)const;
        void fromJson(const QJsonObject& js);
        QString toString(bool multiline = true)const;

        #ifdef DROPBOX_QT_AUTOTEST
        static GroupCreateArg EXAMPLE();
        #endif //DROPBOX_QT_AUTOTEST


    protected:
        ///Group name.
        QString m_group_name;

        ///The creator of a team can associate an arbitrary external ID to the group.
        QString m_group_external_id;

        ///Whether the team can be managed by selected users, or only by team admins
        team_common::GroupManagementType m_group_management_type;

    };//GroupCreateArg

}//team
}//dropboxQt
