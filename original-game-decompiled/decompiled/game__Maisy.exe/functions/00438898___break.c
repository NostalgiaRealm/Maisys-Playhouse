
/* ==== __break @ 00438898 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00438898-00438898
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


