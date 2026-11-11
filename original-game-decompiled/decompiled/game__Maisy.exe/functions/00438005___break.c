
/* ==== __break @ 00438005 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00438005-00438005
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


