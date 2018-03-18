
import Foundation

/// Declares Notification Names
extension Foundation.Notification.Name {
    static var reachabilityChanged: Foundation.NSNotification.Name {
        return Foundation.Notification.Name("org.danipress.reachability.changed")
    }
}

/// Keys for Notification's userInfo dictionary
extension Foundation.Notification {
    static var reachabilityKey: String {
        return "org.danipress.reachability"
    }
}
