class RF_TEMPLATE_CL_KeyHandler: Managed {

    // MARK: - Private Properties

    private autoptr TIntArray keys = {
        KeyCode.KC_PRIOR,
        KeyCode.KC_NEXT,
        KeyCode.KC_INSERT,
        KeyCode.KC_DELETE,
    };

    // MARK: - Init

    void RF_TEMPLATE_CL_KeyHandler() {
        auto game = GetDayZGame();
        if (game) game.Subscribe(this, "OnKeyPress");
    }
    
    void ~RF_TEMPLATE_CL_KeyHandler() {
        auto game = GetDayZGame();
        if (game) game.Unsubscribe(this, "OnKeyPress");
    }
    
    // MARK: - Subscribers
    
    private void OnKeyPress(int key) {
        if (!isKeyWhitelisted(key)) return;
        RF_TEMPLATE_CL_Global.rpc.Send("didPressKey", key);
    }

    private bool isKeyWhitelisted(int key) {
        auto isExist = keys.Find(key);
        return isExist != -1;
    }
}