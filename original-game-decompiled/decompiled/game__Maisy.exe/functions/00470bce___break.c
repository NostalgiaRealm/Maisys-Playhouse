
/* ==== __break @ 00470bce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00470bce-00470bce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


