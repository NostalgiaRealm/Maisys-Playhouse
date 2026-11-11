
/* ==== __break @ 00402a6e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00402a6e-00402a6e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


