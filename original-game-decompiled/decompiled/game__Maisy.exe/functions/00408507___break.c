
/* ==== __break @ 00408507 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00408507-00408507
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


