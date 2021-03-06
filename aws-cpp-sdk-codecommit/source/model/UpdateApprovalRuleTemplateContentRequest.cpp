﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codecommit/model/UpdateApprovalRuleTemplateContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateApprovalRuleTemplateContentRequest::UpdateApprovalRuleTemplateContentRequest() : 
    m_approvalRuleTemplateNameHasBeenSet(false),
    m_newRuleContentHasBeenSet(false),
    m_existingRuleContentSha256HasBeenSet(false)
{
}

Aws::String UpdateApprovalRuleTemplateContentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_approvalRuleTemplateNameHasBeenSet)
  {
   payload.WithString("approvalRuleTemplateName", m_approvalRuleTemplateName);

  }

  if(m_newRuleContentHasBeenSet)
  {
   payload.WithString("newRuleContent", m_newRuleContent);

  }

  if(m_existingRuleContentSha256HasBeenSet)
  {
   payload.WithString("existingRuleContentSha256", m_existingRuleContentSha256);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateApprovalRuleTemplateContentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdateApprovalRuleTemplateContent"));
  return headers;

}




