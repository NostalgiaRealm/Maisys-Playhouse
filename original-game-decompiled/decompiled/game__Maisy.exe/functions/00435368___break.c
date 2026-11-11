
/* ==== __break @ 00435368 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00435368-00435368
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


