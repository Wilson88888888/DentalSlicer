/*==============================================================================

  Copyright (c) Kitware, Inc.

  See http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware, Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qDentalSlicerAppMainWindow_h
#define __qDentalSlicerAppMainWindow_h

// DentalSlicer includes
#include "qDentalSlicerAppExport.h"
class qDentalSlicerAppMainWindowPrivate;

// Slicer includes
#include "qSlicerMainWindow.h"

class Q_DENTALSLICER_APP_EXPORT qDentalSlicerAppMainWindow : public qSlicerMainWindow
{
  Q_OBJECT
public:
  typedef qSlicerMainWindow Superclass;

  qDentalSlicerAppMainWindow(QWidget *parent=0);
  virtual ~qDentalSlicerAppMainWindow();

public slots:
  void on_HelpAboutDentalSlicerAppAction_triggered();

protected:
  qDentalSlicerAppMainWindow(qDentalSlicerAppMainWindowPrivate* pimpl, QWidget* parent);

private:
  Q_DECLARE_PRIVATE(qDentalSlicerAppMainWindow);
  Q_DISABLE_COPY(qDentalSlicerAppMainWindow);
};

#endif
