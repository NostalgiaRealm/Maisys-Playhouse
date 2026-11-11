
/* ==== __break @ 00402e37 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00402e37-00402e37
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


