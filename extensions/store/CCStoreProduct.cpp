
#include "CCStoreProduct.h"

namespace extensions {
    
    CCStoreProduct* CCStoreProduct::productWithId(const char* productIdentifier,
                                                  const char* localizedTitle,
                                                  const char* localizedDescription,
                                                  float price,
                                                  const char* priceLocale)
    {
        CCStoreProduct* product = new CCStoreProduct();
        product->initWithId(productIdentifier, localizedTitle, localizedDescription, price, priceLocale);
        product->autorelease();
        return product;
    }
    
    bool CCStoreProduct::initWithId(const char* productIdentifier,
                                    const char* localizedTitle,
                                    const char* localizedDescription,
                                    float price,
                                    const char* priceLocale)
    {
        m_productIdentifier = productIdentifier;
        m_localizedTitle = localizedTitle;
        m_localizedDescription = localizedDescription;
        m_price = price;
        m_priceLocale = priceLocale;
        return true;
    }
    
} // namespace store
