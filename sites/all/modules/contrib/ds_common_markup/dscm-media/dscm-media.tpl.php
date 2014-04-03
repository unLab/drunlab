<article class="media <?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>
  <?php if ($image): ?>
    <div class="img<?php print $image_classes; ?>"><?php print $image; ?></div>
  <?php endif ?>
  <?php if ($body): ?>
    <div class="bd<?php print $body_classes; ?>"><?php print $body; ?></div>
  <?php endif; ?>
  <?php if ($after): ?>
    <div class="media--after<?php print $after_classes; ?>"><?php print $after ?></div>
  <?php endif; ?>
</article>

