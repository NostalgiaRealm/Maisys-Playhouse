
/* ==== __break @ 00414ded ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00414ded-00414ded
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


