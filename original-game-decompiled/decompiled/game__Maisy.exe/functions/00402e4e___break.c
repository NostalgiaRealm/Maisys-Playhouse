
/* ==== __break @ 00402e4e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00402e4e-00402e4e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


