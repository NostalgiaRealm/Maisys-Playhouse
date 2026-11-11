
/* ==== __break @ 00488779 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00488779-00488779
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


