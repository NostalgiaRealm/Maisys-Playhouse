
/* ==== __break @ 00402e34 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00402e34-00402e34
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


