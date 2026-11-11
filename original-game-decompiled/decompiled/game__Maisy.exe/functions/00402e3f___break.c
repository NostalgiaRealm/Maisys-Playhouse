
/* ==== __break @ 00402e3f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00402e3f-00402e3f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


