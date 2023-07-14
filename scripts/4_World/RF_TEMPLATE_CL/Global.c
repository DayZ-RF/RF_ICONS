class RF_TEMPLATE_CL_Global: Managed {

	// MARK: - Static Properties

	static ref RF_TEMPLATE_CL_KeyHandler keyHandler;

	static ref RF_TEMPLATE_CL_RPCInstance rpc;

	// MARK: - Static

	static void InitializeUnits() {
		rpc = new RF_TEMPLATE_CL_RPCInstance();
		keyHandler = new RF_TEMPLATE_CL_KeyHandler();
	}
}