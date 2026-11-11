
/* ==== __break @ 00402e49 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00402e49-00402e49
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


