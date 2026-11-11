
/* ==== __break @ 00402e2f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00402e2f-00402e2f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


