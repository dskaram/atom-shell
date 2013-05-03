// Copyright (c) 2013 GitHub, Inc. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ATOM_BROSER_BROWSER_OBSERVER_H_
#define ATOM_BROSER_BROWSER_OBSERVER_H_

namespace atom {

class BrowserObserver {
 public:
  // The browser has closed all windows and will quit.
  virtual void OnWillQuit(bool* prevent_default) {}

  // The browser has closed all windows. If the browser is quiting, then this
  // method will not be called, instead it will call OnWillQuit.
  virtual void OnWindowAllClosed() {}

 protected:
  virtual ~BrowserObserver() {}
};

}  // namespace atom

#endif  // ATOM_BROSER_BROWSER_OBSERVER_H_