
/* ==== __break @ 00402e38 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00402e38-00402e38
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


