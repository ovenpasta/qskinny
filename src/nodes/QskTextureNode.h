/******************************************************************************
 * QSkinny - Copyright (C) 2016 Uwe Rathmann
 * This file may be used under the terms of the QSkinny License, Version 1.0
 *****************************************************************************/

#ifndef QSK_TEXTURE_NODE_H
#define QSK_TEXTURE_NODE_H

#include "QskGlobal.h"

#include <qnamespace.h>
#include <qsgnode.h>

class QQuickWindow;
class QskTextureNodePrivate;
class QSGTexture;

class QSK_EXPORT QskTextureNode : public QSGGeometryNode
{
  public:
    QskTextureNode();
    ~QskTextureNode() override;

    bool isNull() const;
#ifdef USE_TEXTUREID
    void setTexture( QQuickWindow*, const QRectF&, uint id,
        Qt::Orientations mirrored = Qt::Orientations() );
    uint textureId() const;
#else
	void setTexture( QQuickWindow*, const QRectF&, QSGTexture *texture,
        Qt::Orientations mirrored = Qt::Orientations() );
	QSGTexture* texture() const;
#endif

    QRectF rect() const;
    Qt::Orientations mirrored() const;

  private:
    Q_DECLARE_PRIVATE( QskTextureNode )
};

#endif
