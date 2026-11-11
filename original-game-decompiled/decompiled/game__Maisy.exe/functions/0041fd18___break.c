
/* ==== __break @ 0041fd18 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041fd18-0041fd18
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


