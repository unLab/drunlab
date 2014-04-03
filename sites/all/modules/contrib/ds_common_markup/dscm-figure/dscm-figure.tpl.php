
<figure class="<?php print $classes; ?>">
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

  <?php if ($image): ?>
    <div class="img<?php print $image_classes; ?>">
      <?php print $image; ?>
    </div>
  <?php endif; ?>

  <?php if ($caption): ?>
    <figcaption class="bd<?php print $caption_classes; ?>">
      <?php print $caption; ?>
    </figcaption>
  <?php endif; ?>

</figure>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
