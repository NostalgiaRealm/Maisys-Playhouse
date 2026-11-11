
/* ==== __break @ 004107bb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004107bb-004107bb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


