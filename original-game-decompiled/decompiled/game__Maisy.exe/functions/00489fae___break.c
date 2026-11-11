
/* ==== __break @ 00489fae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00489fae-00489fae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


